//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PompMisadventurerDI : NSObject
{
    NSString *_accessToken;
    NSString *_accessKey;
    NSString *_bucketName;
    NSString *_endPoint;
    NSString *_accessSecret;
    NSString *_path;
    NSString *_expiration;
}

@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *accessSecret; // @synthesize accessSecret=_accessSecret;
@property(copy, nonatomic) NSString *endPoint; // @synthesize endPoint=_endPoint;
@property(copy, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;

@end

