//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol IFNetworkContentActionsService
- (void)deleteFeedsReadsWithSuccess:(void (^)(IFNetworkStatusResponse *))arg1 failure:(void (^)(NSError *))arg2;
- (void)putAbuseForContentId:(NSString *)arg1 from:(NSString *)arg2 type:(NSString *)arg3 success:(void (^)(IFNetworkStatusResponse *))arg4 failure:(void (^)(NSError *))arg5;
- (void)deleteRepostForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentRepostResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)postRepostForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentRepostResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)deleteUnsmileForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentUnsmileResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)putUnsmileForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentUnsmileResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)deleteSmileForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentSmileResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)putSmileForContentId:(NSString *)arg1 from:(NSString *)arg2 success:(void (^)(IFNetworkContentSmileResponse *))arg3 failure:(void (^)(NSError *))arg4;
@end

