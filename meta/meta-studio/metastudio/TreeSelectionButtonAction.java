package metastudio;

import javax.swing.*;
import javax.swing.tree.*;
import java.awt.event.*;

import metastudio.data.graph.*;
import aterm.*;

class TreeSelectionButtonAction extends AbstractAction {
    private ATerm type;
    private ATerm action;
    private UserInterfaceBridge bridge;
    private MetaGraphFactory factory;
    private JTree moduleTree;

    public TreeSelectionButtonAction(
        String name,
        ATerm type,
        ATerm action,
        JTree moduleTree,
        UserInterfaceBridge bridge,
        MetaGraphFactory factory) {
        super(name);
        this.type = type;
        this.action = action;
        this.moduleTree = moduleTree;
        this.bridge = bridge;
        this.factory = factory;
    }

    public TreeSelectionButtonAction(
        String name,
        Icon icon,
        ATerm type,
        ATerm action,
        JTree moduleTree,
        UserInterfaceBridge bridge,
        MetaGraphFactory factory) {
        super(name, icon);
        this.type = type;
        this.action = action;
        this.moduleTree = moduleTree;
        this.bridge = bridge;
        this.factory = factory;
    }

    public void actionPerformed(ActionEvent actionEvent) {
        TreePath values[] = moduleTree.getSelectionPaths();

        if (values != null && values.length > 0) {
            for (int i = 0; i < values.length; i++) {
                String fullName =
                    ((TreeNode) values[i].getLastPathComponent()).getFullName();
                ATerm event =
                    factory.getPureFactory().make(
                        "button-selected(<term>, <str>, <term>)",
                        type,
                        fullName,
                        action);
                bridge.postEvent(event);
            }
        } else {
            ATerm event =
                factory.getPureFactory().make(
                    "button-selected(<term>, <term>)",
                    type,
                    action);
            bridge.postEvent(event);
        }
    }
}
