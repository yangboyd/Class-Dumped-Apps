//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTOfflineManager;

@interface SPTExternalIntegrationTrackContentFactory : NSObject
{
    id <SPTOfflineManager> _offlineManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (id)createContentWithTrack:(id)arg1 requestOptions:(id)arg2;
- (id)initWithOfflineManager:(id)arg1;

@end

