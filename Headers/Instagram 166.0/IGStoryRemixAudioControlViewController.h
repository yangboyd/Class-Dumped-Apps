//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewController.h>

#import <FBSharedFramework/IGSwitchViewProviderDelegate-Protocol.h>

@class IGListItemView, IGTableLayoutSpec, NSArray, NSMutableDictionary, NSString;
@protocol IGStoryRemixAudioControlViewControllerDelegate;

@interface IGStoryRemixAudioControlViewController : IGPlainTableViewController <IGSwitchViewProviderDelegate>
{
    IGTableLayoutSpec *_layoutSpec;
    IGListItemView *_radioSizingView;
    IGListItemView *_switchSizingView;
    NSArray *_options;
    NSMutableDictionary *_selectedIdentifiers;
    _Bool _singleSelectionEnabled;
    id <IGStoryRemixAudioControlViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool singleSelectionEnabled; // @synthesize singleSelectionEnabled=_singleSelectionEnabled;
@property(nonatomic) __weak id <IGStoryRemixAudioControlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1 selectedOptionIdentifiers:(id)arg2 singleSelectionEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

