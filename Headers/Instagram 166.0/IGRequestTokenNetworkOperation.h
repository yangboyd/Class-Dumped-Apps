//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkOperation-Protocol.h>

@class NSString, NSURL;
@protocol IGRequestToken;

@interface IGRequestTokenNetworkOperation : NSObject <IGNetworkOperation>
{
    NSURL *_url;
    NSString *_requestRangeHeader;
    id <IGRequestToken> _requestToken;
    id _cancellationIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id cancellationIdentifier; // @synthesize cancellationIdentifier=_cancellationIdentifier;
@property(retain, nonatomic) id <IGRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *requestRangeHeader; // @synthesize requestRangeHeader=_requestRangeHeader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (double)requestDownloadProgress;
- (id)networkMonitorLabel;
- (long long)queuePriority;
- (_Bool)isExecuting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

