//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface  YR : NSObject
{
    int _signalID;
    NSString *_type;
    NSString *_callbackID;
    NSData *_inputKey;
    NSData *_outputKey;
    NSArray *_arguments;
    NSString *_destination;
    long long _jsContextID;
}

@property long long jsContextID; // @synthesize jsContextID=_jsContextID;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(nonatomic) int signalID; // @synthesize signalID=_signalID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)JK;
- (id)w;

@end

