#ifndef _SDFME_UTILS_H
#define _SDFME_UTILS_H

#include "SDFME.h"

char      *SDFgetModuleName (SDF_Module sdfModule);
SDF_Module SDFsetModuleName (SDF_Module sdfModule, char *name);
SDF_ModuleId SDFmakeModuleId(char *moduleStr);
SDF_ModuleName SDFmakeModuleName(char *moduleStr);

ATermList  SDFgetGrammars              (SDF_Module module);
typedef    void (*SDFGrammarFunc)      (SDF_Grammar, ATerm *);
void       SDFforeachGrammar           (SDF_Grammar     grammar,
					SDFGrammarFunc  func,
					void           *user_data);
void       SDFforeachGrammarInSections (SDF_Sections    sections,
					SDFGrammarFunc  func,
					void           *user_data);
void       SDFforeachGrammarInModule   (SDF_Module      module,
					SDFGrammarFunc  func,
					void           *user_data);


ATerm SDF_getModuleNamePlain(SDF_ModuleName moduleName);
ATerm SDF_getImportModuleNamePlain(SDF_Import import);
ATermList      SDF_getImports(SDF_Module module);
SDF_ImportList SDF_getModuleImportsList(SDF_Module module);
SDF_ImportList SDF_concatImportList(SDF_ImportList l1, SDF_ImportList l2);
ATbool SDF_containsImportListImport(SDF_ImportList list, 
                                    SDF_Import  import);
SDF_Module SDF_addModuleImport(SDF_Module mod, SDF_Import import);

SDF_SymbolList  SDF_getModuleSorts(SDF_Module module);

SDF_ProductionList SDF_getModuleProductions(SDF_Module module);
SDF_ProductionList SDF_getModuleVariableProductions(SDF_Module module);
SDF_ProductionList SDF_getModuleLexicalProductions(SDF_Module module);
SDF_ProductionList SDF_getModuleLexicalProductionsGivenSymbol(SDF_Symbol symbol,
                                                              SDF_Module module);
SDF_ProductionList SDF_getModuleContextFreeProductions(SDF_Module module);
SDF_ProductionList SDF_concatProductionList(SDF_ProductionList list1, 
                                            SDF_ProductionList list2);
SDF_ProductionList  SDF_getGrammarKernelProductions(SDF_Grammar grammar);

SDF_PriorityList SDF_concatPriorityList(SDF_PriorityList list1, 
                                        SDF_PriorityList list2);
SDF_PriorityList    SDF_getGrammarKernelPriorities(SDF_Grammar grammar);

SDF_RestrictionList SDF_concatRestrictionList(SDF_RestrictionList list1, 
                                              SDF_RestrictionList list2);
SDF_RestrictionList SDF_getGrammarKernelRestrictions(SDF_Grammar grammar);

SDF_Production SDF_removeAttributes(SDF_Production prod);

ATbool SDF_hasRejectAttribute(SDF_Production prod);
ATbool SDF_hasPreferAttribute(SDF_Production prod);
ATbool SDF_hasAvoidAttribute(SDF_Production prod);

SDF_OptLayout SDF_makeLayoutEmpty();
SDF_OptLayout SDF_makeLayoutSpace();

SDF_Import SDFmakeImport(char *moduleName);
SDF_Module SDFaddModuleImport(SDF_Module module, SDF_Import import);


SDF_Renamings SDF_makeRenamingsFromParameters(SDF_Symbols formals,
					      SDF_Symbols actuals);
SDF_Renamings SDF_makeRenamingsFromModuleNames(SDF_ModuleName formal,
					       SDF_ModuleName actual);
SDF_Renamings SDF_renameRenamings(SDF_Renamings source, SDF_Renamings target);

SDF_Symbol SDF_removeSymbolAnnotations(SDF_Symbol s);

#endif /* _SDF_UTILS_H */
