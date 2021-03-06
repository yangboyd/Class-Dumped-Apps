//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MDXCaptionTrack : NSObject
{
    long long _channel;
    NSString *_VSSID;
    NSString *_trackName;
    NSString *_languageCode;
    NSString *_languageName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(readonly, nonatomic) NSString *VSSID; // @synthesize VSSID=_VSSID;
@property(readonly, nonatomic) long long channel; // @synthesize channel=_channel;
- (_Bool)isEqualToMDXCaptionTrack:(id)arg1;
- (_Bool)isEqualToMLCaptionTrack:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMLCaptionTrack:(id)arg1;
- (id)initWithChannelMessagePayload:(id)arg1;

@end

