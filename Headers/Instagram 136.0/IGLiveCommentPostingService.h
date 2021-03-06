//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore, NSString;
@protocol IGAPIClient, IGLiveCommentPostingServiceDelegate, IGLiveLoggingContext;

@interface IGLiveCommentPostingService : NSObject
{
    IGUserStore *_userStore;
    id <IGLiveCommentPostingServiceDelegate> _delegate;
    id <IGAPIClient> _networker;
    NSString *_mediaId;
    id <IGLiveLoggingContext> _loggingContext;
}

@property(readonly, nonatomic) id <IGLiveLoggingContext> loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) __weak id <IGLiveCommentPostingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postCommentText:(id)arg1 fromUser:(id)arg2 secondsIntoVideo:(double)arg3 commentLoggingExtras:(id)arg4;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2 loggingContext:(id)arg3 userStore:(id)arg4;

@end

