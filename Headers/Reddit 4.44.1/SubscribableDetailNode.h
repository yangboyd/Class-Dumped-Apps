//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASTextNode, BaseButtonNode, SubscribableButtonNode, SubscribableDetailModel;

@interface SubscribableDetailNode : BaseFeedDisplayNode
{
    SubscribableButtonNode *_buttonNode;
    ASTextNode *_titleTextNode;
    ASTextNode *_detailTextNode;
    BaseButtonNode *_detailButtonNode;
    SubscribableDetailModel *_model;
}

@property(retain, nonatomic) SubscribableDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) BaseButtonNode *detailButtonNode; // @synthesize detailButtonNode=_detailButtonNode;
@property(retain, nonatomic) ASTextNode *detailTextNode; // @synthesize detailTextNode=_detailTextNode;
@property(retain, nonatomic) ASTextNode *titleTextNode; // @synthesize titleTextNode=_titleTextNode;
@property(retain, nonatomic) SubscribableButtonNode *buttonNode; // @synthesize buttonNode=_buttonNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (void)createNodes;
- (id)initWithModel:(id)arg1;
- (id)detailStringForResult:(id)arg1;

@end

