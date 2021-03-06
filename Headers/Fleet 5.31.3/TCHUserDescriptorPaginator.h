//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TCHChannel, TCHUsers;

@interface TCHUserDescriptorPaginator : NSObject
{
    TCHChannel *_channel;
    TCHUsers *_users;
    NSArray *_fetchedItems;
    NSString *_nextPageToken;
}

@property(copy, nonatomic) NSString *nextPageToken; // @synthesize nextPageToken=_nextPageToken;
@property(retain, nonatomic) NSArray *fetchedItems; // @synthesize fetchedItems=_fetchedItems;
@property(nonatomic) __weak TCHUsers *users; // @synthesize users=_users;
@property(retain, nonatomic) TCHChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)requestNextPageWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasNextPage;
- (id)items;
- (id)initWithChannel:(id)arg1 users:(id)arg2 items:(id)arg3 nextPageToken:(id)arg4;

@end

