//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_Node.h"

@class JavaUtilConcurrentConcurrentHashMap_TreeNode;

@interface JavaUtilConcurrentConcurrentHashMap_TreeBin : JavaUtilConcurrentConcurrentHashMap_Node
{
    JavaUtilConcurrentConcurrentHashMap_TreeNode *root_;
    unsigned long long first_;
    unsigned long long waiter_;
    // Error parsing type: Ai, name: lockState_
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)checkInvariantsWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1;
+ (id)balanceDeletionWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg2;
+ (id)balanceInsertionWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg2;
+ (id)rotateRightWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg2;
+ (id)rotateLeftWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1 withJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg2;
+ (int)tieBreakOrderWithId:(id)arg1 withId:(id)arg2;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)removeTreeNodeWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1;
- (id)putTreeValWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3;
- (id)findWithInt:(int)arg1 withId:(id)arg2;
- (void)contendedLock;
- (void)unlockRoot;
- (void)lockRoot;
- (id)initWithJavaUtilConcurrentConcurrentHashMap_TreeNode:(id)arg1;

@end

