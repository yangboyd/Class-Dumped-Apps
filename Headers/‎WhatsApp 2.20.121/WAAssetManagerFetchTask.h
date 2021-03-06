//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, NSURL;

@interface WAAssetManagerFetchTask : NSObject
{
    _Bool _allowsCellularAccess;
    NSString *_assetIdentifier;
    NSURL *_url;
    unsigned long long _attemptCount;
    NSMutableData *_receivedData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(readonly, nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (id)initWithAssetIdentifier:(id)arg1 url:(id)arg2 attemptCount:(unsigned long long)arg3 allowsCellularAccess:(_Bool)arg4;

@end

