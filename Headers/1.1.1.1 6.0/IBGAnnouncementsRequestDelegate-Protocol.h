//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/NSObject-Protocol.h>

@class IBGAnnouncementsRequest, NSArray;

@protocol IBGAnnouncementsRequestDelegate <NSObject>
- (void)annoucmentsRequestDone:(IBGAnnouncementsRequest *)arg1 isSuccess:(_Bool)arg2 announcments:(NSArray *)arg3 pausedAnnouncementsIDs:(NSArray *)arg4;
@end

