//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AFHTTPRequestSerializer, NSDictionary, NSString;
@protocol IFNetworkRequestUrlBuilder, IFNetworkResponseMapping, IFNetworkResponseSerializer, IFNetworkResponseValidator;

@protocol IFNetworkRequest
- (double)timeoutInterval;
- (id <IFNetworkRequestUrlBuilder>)urlBuilder;
- (AFHTTPRequestSerializer *)requestSerialization;
- (id <IFNetworkResponseMapping>)responseMapper;
- (id <IFNetworkResponseValidator>)responseValidator;
- (id <IFNetworkResponseSerializer>)responseSerializer;
- (Class)responseClass;
- (unsigned long long)cachePolicy;
- (NSDictionary *)headers;
- (NSDictionary *)parameters;
- (NSString *)path;
- (long long)httpMethod;
@end

