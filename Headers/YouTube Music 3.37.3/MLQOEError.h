//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MLQOEError : NSObject
{
    NSString *_code;
    NSDictionary *_details;
}

+ (id)parseRequestNumberFromURL:(id)arg1;
+ (id)detailsFromError:(id)arg1 host:(id)arg2;
+ (id)QOEErrorWithNSError:(id)arg1 host:(id)arg2;
+ (id)QOEErrorWithNSError:(id)arg1;
+ (id)QOEErrorWithCode:(id)arg1 underlyingError:(id)arg2;
+ (id)QOEErrorWithCode:(id)arg1 details:(id)arg2;
+ (id)QOEErrorWithCode:(id)arg1;
+ (id)QOEErrorWithPlaybackError:(id)arg1;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCode:(id)arg1 details:(id)arg2;
- (id)detailsString;
- (id)errorWithPrefix:(id)arg1;

@end

