//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCScanCardTableViewCell;
@protocol SCScanCardDeepLinkProtocol;

@protocol SCScanCardDeepLinkDelegate <NSObject>
- (void)deepLinkCard:(SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *)arg1 spectaclesLinkToURL:(NSString *)arg2;
- (void)deepLinkCard:(SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *)arg1 commerceLinkToUrl:(NSString *)arg2;
- (void)deepLinkCard:(SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *)arg1 didTapShareUrl:(NSString *)arg2;
- (void)deepLinkCard:(SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *)arg1 chatLinkToURL:(NSString *)arg2;
- (void)deepLinkCard:(SCScanCardTableViewCell<SCScanCardDeepLinkProtocol> *)arg1 didDeepLinkToURL:(NSString *)arg2;
@end

