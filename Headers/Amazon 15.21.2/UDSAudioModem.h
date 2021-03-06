//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UDSAudioPlayerDelegate-Protocol.h"

@class NSString, UDSAudioListener, UDSAudioPlayer;
@protocol UDSToken;

@interface UDSAudioModem : NSObject <UDSAudioPlayerDelegate>
{
    _Bool _shouldKeepPlaying;
    UDSAudioPlayer *_audioPlayer;
    UDSAudioListener *_audioListener;
    unsigned long long _beepCount;
    id <UDSToken> _token;
    NSString *_SSID;
    NSString *_password;
    NSString *_realm;
    NSString *_cc;
}

+ (id)audioModemWithToken:(id)arg1 SSID:(id)arg2 password:(id)arg3 realm:(id)arg4 andCountryCode:(id)arg5;
+ (id)audioModemWithToken:(id)arg1 SSID:(id)arg2 andPassword:(id)arg3;
@property(nonatomic) _Bool shouldKeepPlaying; // @synthesize shouldKeepPlaying=_shouldKeepPlaying;
@property(retain, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(retain, nonatomic) id <UDSToken> token; // @synthesize token=_token;
@property(nonatomic) unsigned long long beepCount; // @synthesize beepCount=_beepCount;
@property(retain, nonatomic) UDSAudioListener *audioListener; // @synthesize audioListener=_audioListener;
@property(retain, nonatomic) UDSAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)audioNeedsToBeReplayed;
- (void)stopListening;
- (void)stopPlaying;
- (void)startListening;
- (void)startPlaying;
- (id)initWithToken:(id)arg1 SSID:(id)arg2 andPassword:(id)arg3;
- (id)initWithToken:(id)arg1 SSID:(id)arg2 password:(id)arg3 realm:(id)arg4 andCountryCode:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

