package metastudio.components;

import javax.swing.JComponent;
import javax.swing.JOptionPane;

import metastudio.*;
import metastudio.MultiBridge;
import aterm.ATerm;
import aterm.ATermFactory;

public class QuestionDialog extends UserInterfacePanel {
    private JComponent parent;
    
    public QuestionDialog(ATermFactory factory, MultiBridge bridge, JComponent parent) {
        super(factory, bridge);
        this.parent = parent;
    }

    public ATerm showQuestionDialog(String question) {
        int choice = JOptionPane.showConfirmDialog(parent, question);

        if (choice == JOptionPane.YES_OPTION) {
            return getFactory().make("answer(yes)");
        }
        if (choice == JOptionPane.NO_OPTION) {
            return getFactory().make("answer(no)");
        }
        
        return getFactory().make("answer(cancel)");
    }
}
