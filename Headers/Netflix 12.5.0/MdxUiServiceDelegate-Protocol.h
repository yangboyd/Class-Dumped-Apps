//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MdxUiConnection, MdxUiPlaySession, MdxUiService, NSDictionary, NSNumber, NSString, PlaybackRequest, UIAlertController;

@protocol MdxUiServiceDelegate <NSObject>

@optional
- (double)mdxUiServiceAppLaunchTime:(MdxUiService *)arg1;
- (void)mdxUiService:(MdxUiService *)arg1 showTargetMenuWithDelegate:(id)arg2 sender:(id)arg3;
- (void)mdxUiService:(MdxUiService *)arg1 presentAlertController:(UIAlertController *)arg2;
- (void)mdxUiService:(MdxUiService *)arg1 didJoinPlaySession:(MdxUiPlaySession *)arg2;
- (void)mdxUiService:(MdxUiService *)arg1 downloadJSSource:(NSString *)arg2 forceRemote:(_Bool)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 refreshCredentials:(void (^)(_Bool))arg3;
- (void)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 handlePinVerificationWithVideoId:(NSNumber *)arg3 callback:(void (^)(_Bool, NSString *, NSError *))arg4;
- (_Bool)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 isSkipIntroEnabled:(PlaybackRequest *)arg3;
- (_Bool)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 isContentPreviewPinVerified:(PlaybackRequest *)arg3;
- (_Bool)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 isPinVerified:(PlaybackRequest *)arg3;
- (_Bool)mdxUiService:(MdxUiService *)arg1 connection:(MdxUiConnection *)arg2 isPostPlayEnabled:(PlaybackRequest *)arg3;
- (NSString *)mdxUiServiceActiveProfileId:(MdxUiService *)arg1;
- (void)mdxUiService:(MdxUiService *)arg1 didStartWithMdxVersion:(NSString *)arg2;
- (_Bool)mdxUiService:(MdxUiService *)arg1 isDownloadEnabled:(NSString *)arg2;
- (NSDictionary *)mdxUiServiceMdxConfigurationOptions:(MdxUiService *)arg1;
- (NSDictionary *)mdxUiServiceMdxVersionInfo:(MdxUiService *)arg1;
- (_Bool)mdxUiServiceEnabled:(MdxUiService *)arg1;
@end

