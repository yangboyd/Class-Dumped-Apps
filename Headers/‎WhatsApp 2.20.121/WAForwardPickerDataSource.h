//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSSet, NSString, WAContactsSection;
@protocol WAForwardPickerDataSourceDelegate;

@interface WAForwardPickerDataSource : NSObject <UITableViewDataSource>
{
    long long _statusSectionIndex;
    WAContactsSection *_sectionFrequentlyContacted;
    WAContactsSection *_sectionRecentChats;
    NSArray *_fetchedRecentChats;
    _Bool _allowsStatusSelection;
    long long _contentType;
    NSSet *_excludedJIDs;
    id <WAForwardPickerDataSourceDelegate> _delegate;
    long long _fsFrequentContactsCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long fsFrequentContactsCount; // @synthesize fsFrequentContactsCount=_fsFrequentContactsCount;
@property(nonatomic) __weak id <WAForwardPickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSSet *excludedJIDs; // @synthesize excludedJIDs=_excludedJIDs;
@property(nonatomic) _Bool allowsStatusSelection; // @synthesize allowsStatusSelection=_allowsStatusSelection;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
- (long long)fsNumberOfFrequentsInContacts:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isIndexPathForStatusRow:(id)arg1;
- (id)chatSessionAtIndexPath:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
- (long long)indexOfRecentChatsSection;
- (long long)indexOfFrequentlyContactedSection;
- (id)contactFromChatSession:(id)arg1;
- (void)loadRecentChatsIfNecessary;
- (id)fetchPendingOutboxTimestamps;
- (id)timestampsOfPendingOutboxes;
- (void)loadFrequentlyContactedIfNecessary;
- (void)loadDataIfNecessary;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

