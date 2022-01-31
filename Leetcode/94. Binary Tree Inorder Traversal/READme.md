### Inorder Traversal Iterative
***

 * We push all the left children of root into the stack until there's no more nodes.
 >           if(root != NULL){
 >              s.push(root);
 >               root = root->left;
 >           }
 * if there is no node's left child then print the node
 >           else{
 >              if(s.empty()) break;
 >              root = s.top();
 >              s.pop();
 >              in.push_back(root->val);

 * then, we will move to right child as root
 >              root = root->right;
 >              }
 * now, this right child will be act as root then we go push their left childs into stack and so on.
 * the only condition to come out of loop is stack should be empty and no nodes left.
 
 * let say if we have simple tree like
>              1
>          2       3
 *  push 1 to the stack
 *  now, root = root.left (2)
 *  again check root is not null
 *  push 2 to stack and root = root.left (null)
 *  root is null means no left nodes present.
 *  move into else part, first check for if stack is empty, it's not so continue;
 *  pop the top node and print it --- 2
 *  now do this the same with root = root.right
 
