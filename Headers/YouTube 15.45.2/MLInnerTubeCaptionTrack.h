//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCaptionTrack-Protocol.h>

@class NSString, NSURL;

@interface MLInnerTubeCaptionTrack : NSObject <MLCaptionTrack>
{
    NSString *_languageCode;
    NSString *_trackName;
    unsigned long long _trackType;
    NSString *_VSSID;
    long long _channel;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSString *VSSID; // @synthesize VSSID=_VSSID;
@property(readonly, nonatomic) unsigned long long trackType; // @synthesize trackType=_trackType;
@property(readonly, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 trackName:(id)arg2 channel:(long long)arg3 VSSID:(id)arg4 URL:(id)arg5 trackType:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

