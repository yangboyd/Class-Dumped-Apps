//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCChatBaseTableView, SCCheetahNewChatsAffordanceView, SCExperimentManager;
@protocol SCNewChatsAffordanceDelegate;

@interface SCChatTableContainerViewV3 : UIView
{
    SCCheetahNewChatsAffordanceView *_newChatsAffordanceView;
    id <SCNewChatsAffordanceDelegate> _newChatsAffordanceDelegate;
    SCChatBaseTableView *_tableView;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)setMaskViewVisible:(_Bool)arg1;
- (void)hideChatAffordanceAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideChatAffordanceIfNecessaryAnimated:(_Bool)arg1;
- (void)_fadeInNewChatsAffordance;
- (void)showChatAffordanceOnBottomIfNecessary;
- (void)showChatAffordanceOnTopIfNecessary;
- (id)newChatsAffordanceView;
- (void)layoutSubviews;
- (id)initWithTableView:(id)arg1 newChatsAffordanceDelegate:(id)arg2 experimentManager:(id)arg3;

@end

