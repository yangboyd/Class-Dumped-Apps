//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAPIClient, IGLiveCommentMutingServiceDelegate;

@interface IGLiveCommentMutingService : NSObject
{
    id <IGAPIClient> _networker;
    NSString *_mediaId;
    id <IGLiveCommentMutingServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveCommentMutingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unmuteComments;
- (void)muteComments;
- (id)initWithMediaId:(id)arg1 networker:(id)arg2;

@end

