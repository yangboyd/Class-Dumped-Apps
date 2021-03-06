//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GILRecyclableViewLoggerDataSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GILTableViewLogger, NSArray, NSString, UITableView;
@protocol DYNColorSchemeService, DYNGroupId, DYNMemberCacheService, DYNPostboxUserSuggestionsViewDelegate, DYNSharedLayerService, GIPAccountID;

@interface DYNPostboxUserSuggestionsView : UIView <UITableViewDataSource, UITableViewDelegate, GILRecyclableViewLoggerDataSource>
{
    id <GIPAccountID> _accountID;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNGroupId> _groupID;
    NSString *_query;
    NSArray *_filteredGroupUsers;
    NSArray *_suggestedUsers;
    UITableView *_tableView;
    GILTableViewLogger *_tableViewLogger;
    _Bool _externalUsersAllowed;
    id <DYNPostboxUserSuggestionsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool externalUsersAllowed; // @synthesize externalUsersAllowed=_externalUsersAllowed;
@property(nonatomic) __weak id <DYNPostboxUserSuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowSeparatorForSection:(long long)arg1;
- (id)userForIndexPath:(id)arg1;
- (void)setUpConstraints;
- (void)setUpSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)lastCell;
- (int)firstSectionAvailable;
- (void)focusVoiceOverIfNeeded;
- (id)suggestionsItemVisualElement_:(id)arg1 isInvite:(_Bool)arg2;
- (id)visualElementParamsForItemAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToBottom;
- (double)desiredHeight;
- (void)setSuggestedUsers:(id)arg1;
- (void)setFilteredUsers:(id)arg1;
- (id)initWithGroupID:(id)arg1 accountID:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

