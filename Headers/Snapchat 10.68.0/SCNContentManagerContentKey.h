//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNContentManagerContentKey : NSObject
{
    NSString *_mediaId;
    long long _mediaContextType;
}

+ (id)ContentKeyWithMediaId:(id)arg1 mediaContextType:(long long)arg2;
@property(readonly, nonatomic) long long mediaContextType; // @synthesize mediaContextType=_mediaContextType;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaId:(id)arg1 mediaContextType:(long long)arg2;

@end

