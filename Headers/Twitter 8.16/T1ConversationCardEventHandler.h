//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewBaseEventHandler.h>

#import <T1Twitter/T1CardViewEventHandler-Protocol.h>

@class NSString;
@protocol T1CardComposePresenter;

@interface T1ConversationCardEventHandler : T1CardViewBaseEventHandler <T1CardViewEventHandler>
{
    id <T1CardComposePresenter> _presenter;
}

@property(retain, nonatomic) id <T1CardComposePresenter> presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (CDUnknownBlockType)_t1_composeCompletionBlockForEvent:(id)arg1 eventContext:(id)arg2 viewModel:(id)arg3;
- (void)_t1_handleTapOnButtonWithEvent:(id)arg1 eventContext:(id)arg2 viewModel:(id)arg3;
- (void)_t1_handleTapOnVideoWithEvent:(id)arg1 eventContext:(id)arg2 viewModel:(id)arg3;
- (void)_t1_handleTapOnImageWithEvent:(id)arg1 eventContext:(id)arg2 viewModel:(id)arg3;
- (void)_t1_presentComposeSheetWithText:(id)arg1 viewEvent:(id)arg2 buttonIndex:(unsigned long long)arg3 context:(id)arg4;
- (id)handleViewEvent:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

