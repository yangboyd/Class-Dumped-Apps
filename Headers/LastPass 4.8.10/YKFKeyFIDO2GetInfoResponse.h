//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface YKFKeyFIDO2GetInfoResponse : NSObject
{
    NSArray *_versions;
    NSArray *_extensions;
    NSData *_aaguid;
    NSDictionary *_options;
    unsigned long long _maxMsgSize;
    NSArray *_pinProtocols;
}

@property(retain, nonatomic) NSArray *pinProtocols; // @synthesize pinProtocols=_pinProtocols;
@property(nonatomic) unsigned long long maxMsgSize; // @synthesize maxMsgSize=_maxMsgSize;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSData *aaguid; // @synthesize aaguid=_aaguid;
@property(retain, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSArray *versions; // @synthesize versions=_versions;
- (void).cxx_destruct;
- (_Bool)parseResponseMap:(id)arg1;
- (id)initWithCBORData:(id)arg1;

@end

