//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFSharingRecipientsModel.h>

@interface _TtC8libFunny18MemeChatShareModel : IFSharingRecipientsModel
{
    // Error parsing type: , name: isSending
    // Error parsing type: , name: recipientsSections
}

- (void).cxx_destruct;
- (id)init;
- (id)indexPathForItemWithId:(id)arg1;
- (void)searcher:(id)arg1 didRecieveEntities:(id)arg2 error:(id)arg3;
- (_Bool)searcher:(id)arg1 shouldAddUserWithId:(id)arg2;
- (void)loadInitial;
- (void)loadWithSearchText:(id)arg1;
- (void)reset;
- (id)nameOfSection:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithUserSearcher:(id)arg1;
@property(nonatomic, readonly) unsigned long long sectionCount;

@end

