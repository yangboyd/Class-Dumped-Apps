//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;
@protocol SMAUbLoader, SMAUbResponsing;

@protocol SMAUbLoaderDelegate
- (void)ubLoader:(id <SMAUbLoader>)arg1 didFailWithError:(NSError *)arg2;
- (void)ubLoader:(id <SMAUbLoader>)arg1 didLoadBidData:(id <SMAUbResponsing>)arg2;
@end

