//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/NSObject-Protocol.h>

@class NSString, _TtC16WalmartIOSShared24LocationUpdateController;

@protocol _TtP16WalmartIOSShared32LocationUpdateControllerDelegate_ <NSObject>
- (void)locationUpdateControllerDidSubmitWithLocation:(NSString *)arg1 controller:(_TtC16WalmartIOSShared24LocationUpdateController *)arg2 completionHandler:(void (^)(id, NSError *))arg3;

@optional
- (void)locationUpdateControllerWithDidSearch:(NSString *)arg1 parsedStoreNumber:(NSString *)arg2;
@end

