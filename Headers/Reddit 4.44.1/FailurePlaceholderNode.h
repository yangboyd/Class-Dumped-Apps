//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASImageNode, ASTextNode;

@interface FailurePlaceholderNode : ASDisplayNode
{
    ASImageNode *_imageNode;
    ASTextNode *_mainLabel;
    ASTextNode *_subtextLabel;
}

@property(retain, nonatomic) ASTextNode *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) ASTextNode *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) ASImageNode *imageNode; // @synthesize imageNode=_imageNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithErrorMessage:(id)arg1;

@end

