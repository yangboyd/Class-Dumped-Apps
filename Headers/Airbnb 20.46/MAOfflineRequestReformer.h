//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapRequestReformer.h"

@class NSString;

@interface MAOfflineRequestReformer : AMapRequestReformer
{
    NSString *baseURL;
    NSString *_urlString;
}

+ (id)reformerWithURLString:(id)arg1 existedDataLength:(long long)arg2;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)baseURL;
- (void).cxx_destruct;
- (id)v6Url;
- (id)url;
@property(readonly, nonatomic) unsigned long long cachePolicy;
- (id)initReformerWithURLString:(id)arg1 existedDataLength:(long long)arg2;

@end

