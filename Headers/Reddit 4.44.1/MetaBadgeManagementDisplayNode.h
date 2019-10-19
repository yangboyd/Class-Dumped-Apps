//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASScrollNode.h>

@class ASDisplayNode, MetaBadgeManagementCommentSectionNode, MetaBadgeManagementLoaderNode, MetaSectionNode, NSArray, UIColor;
@protocol MetaBadgeManagementActionDelegate;

@interface MetaBadgeManagementDisplayNode : ASScrollNode
{
    MetaSectionNode *_headerNode;
    MetaBadgeManagementCommentSectionNode *_commentSectionNode;
    MetaBadgeManagementLoaderNode *_loaderNode;
    UIColor *_contentColor;
    NSArray *_tabs;
    id <MetaBadgeManagementActionDelegate> _actionDelegate;
    ASDisplayNode *_placementNode;
}

@property(retain, nonatomic) ASDisplayNode *placementNode; // @synthesize placementNode=_placementNode;
@property(nonatomic) __weak id <MetaBadgeManagementActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) MetaBadgeManagementLoaderNode *loaderNode; // @synthesize loaderNode=_loaderNode;
@property(retain, nonatomic) MetaBadgeManagementCommentSectionNode *commentSectionNode; // @synthesize commentSectionNode=_commentSectionNode;
@property(retain, nonatomic) MetaSectionNode *headerNode; // @synthesize headerNode=_headerNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)updateWithViewModel:(id)arg1 placement:(id)arg2;
- (void)updateSelectedTab:(id)arg1 usernameDecoration:(id)arg2;
- (void)didLoad;
- (id)initWithContentColor:(id)arg1 tabs:(id)arg2 selectedTab:(id)arg3 actionDelegate:(id)arg4;

@end

