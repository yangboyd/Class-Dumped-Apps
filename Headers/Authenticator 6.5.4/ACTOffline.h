//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AriaObjC/ACTIEventQueue-Protocol.h>

@class NSString;

@interface ACTOffline : NSObject <ACTIEventQueue>
{
    unsigned long long _maxOfflineFileSize;
}

@property unsigned long long maxOfflineFileSize; // @synthesize maxOfflineFileSize=_maxOfflineFileSize;
- (void)setQueueSize:(unsigned long long)arg1;
- (unsigned long long)queueSize;
- (void)flush;
- (id)processItemsWithPriority:(int)arg1;
- (void)intakeMultiple:(id)arg1;
- (void)intake:(id)arg1;
- (id)componentName;
- (id)initWithMaxFileSize:(unsigned long long)arg1 filename:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

