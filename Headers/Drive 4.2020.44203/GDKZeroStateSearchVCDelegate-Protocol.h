//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKZeroStateSearchVC, NSIndexPath, NSString;
@protocol GDKSearchFilterRecord;

@protocol GDKZeroStateSearchVCDelegate <NSObject>
- (void)zeroStateSearchVCDidRequestBeginNewMetricsSession:(GDKZeroStateSearchVC *)arg1;
- (void)zeroStateSearchVC:(GDKZeroStateSearchVC *)arg1 didSelectSuggestedQuery:(NSString *)arg2 shouldInitiateSearch:(_Bool)arg3;
- (void)zeroStateSearchVC:(GDKZeroStateSearchVC *)arg1 filterRecordSelected:(id <GDKSearchFilterRecord>)arg2 indexPath:(NSIndexPath *)arg3 shouldInitiateSearch:(_Bool)arg4;
@end

