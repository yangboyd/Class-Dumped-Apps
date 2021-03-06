//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKActiveSearchVC, NSString;
@protocol GDKFile, GDKSearchFilterRecord;

@protocol GDKActiveSearchVCDelegate <NSObject>
- (void)activeSearchVCDidRequestBeginNewMetricsSession:(GDKActiveSearchVC *)arg1;
- (void)activeSearchVC:(GDKActiveSearchVC *)arg1 didSelectFile:(id <GDKFile>)arg2;
- (void)activeSearchVC:(GDKActiveSearchVC *)arg1 didSelectFilter:(id <GDKSearchFilterRecord>)arg2 queryString:(NSString *)arg3 shouldInitiateSearch:(_Bool)arg4;
- (void)activeSearchVC:(GDKActiveSearchVC *)arg1 didSelectSuggestedQuery:(NSString *)arg2 shouldInitiateSearch:(_Bool)arg3;
@end

