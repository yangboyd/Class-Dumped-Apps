//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSAttributedString;

@interface NSString (SPTAdNowPlayingAdHeadUnit)
+ (id)spt_artistBiographySanitizedText:(id)arg1;
+ (id)spt_artistBiographyByRemovingSearchLinks:(id)arg1;
+ (id)spt_artistBiographyByReplacingEndlines:(id)arg1;
+ (id)stringWithHmiEvent:(long long)arg1 component:(unsigned long long)arg2;
+ (id)stringWithActionEvent:(unsigned long long)arg1;
+ (id)stringForLogCategory:(int)arg1;
+ (id)stringForLogLevel:(unsigned long long)arg1;
+ (id)stringWithCDSVehicleLanguage:(long long)arg1;
+ (id)stringWithAudioPlayerProgressBarTouchPhase:(unsigned long long)arg1;
+ (id)stringWithSdsEvent:(unsigned long long)arg1;
+ (id)stringWithMapEvent:(unsigned long long)arg1;
+ (id)stringWithRhmiVersion:(long long)arg1;
+ (id)stringWithVoiceRecorderEvent:(unsigned long long)arg1;
+ (id)stringWithApplicationManagementServiceEvent:(unsigned long long)arg1;
+ (id)stringWithPiaRequestReturnCode:(int)arg1;
+ (id)stringWithPiaEvent:(int)arg1;
+ (id)stringWithPiaDataType:(int)arg1;
+ (id)stringWithPiaRequestType:(int)arg1;
+ (id)stringWithAuxiliaryInput:(unsigned short)arg1;
+ (_Bool)isNonEmptyString:(id)arg1;
+ (_Bool)isNilOrEmptyString:(id)arg1;
+ (id)stringWithA4ARegisterPacketType:(unsigned long long)arg1;
+ (id)stringWithA4APacketType:(unsigned long long)arg1;
+ (id)stringWithStreamEventCode:(unsigned long long)arg1;
+ (id)stringWithStreamStatus:(unsigned long long)arg1;
+ (id)stringForArtists:(id)arg1;
+ (id)stringForArtists:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 numberOfLines:(unsigned long long)arg4 preceedingText:(id)arg5 uppercase:(_Bool)arg6 locale:(id)arg7;
+ (id)stringForSourceType:(long long)arg1;
+ (id)stringForEventType:(long long)arg1;
+ (id)stringForLoadType:(long long)arg1;
+ (id)spt_stringValueForConsumer:(long long)arg1;
+ (id)spt_sessionStateTopic;
+ (id)spt_recentlyPlayedItemsTopic;
+ (id)spt_playingContextTopic;
+ (id)spt_playerStateTopic;
+ (id)spt_playbackSpeedStateTopic;
+ (id)spt_outgoingOfflineStateTopic;
+ (id)spt_incomingOfflineStateTopic;
+ (id)spt_featureFlagsTopic;
+ (id)spt_deviceTopic;
+ (id)spt_connectStateTopic;
+ (id)spt_socketCloseURIForIdentifier:(id)arg1;
+ (id)spt_socketWriteURIForIdentifier:(id)arg1;
+ (id)spt_socketConnectURI;
+ (id)spt_seekURI;
+ (id)spt_setPlaybackSpeedURI;
+ (id)spt_playbackSpeedStateURI;
+ (id)spt_skipBackwardURI;
+ (id)spt_skipForwardURI;
+ (id)spt_setVolumeURI;
+ (id)spt_setRepeatModeURI;
+ (id)spt_setShufflingContextURI;
+ (id)spt_pauseURI;
+ (id)spt_playURI;
+ (id)spt_skipPreviousURI;
+ (id)spt_skipNextURI;
+ (id)spt_currentlyPlayingURI;
+ (id)spt_logMessageURI;
+ (id)spt_imageURI;
+ (id)spt_contentChildrenURI;
+ (id)spt_connectSetActiveDeviceURI;
+ (id)spt_connectDevicesURI;
+ (id)spt_collectionRemoveURI;
+ (id)spt_collectionAddURI;
+ (id)spt_collectionItemStateURI;
+ (id)spt_authorizationRequest;
+ (id)spt_pingURI;
+ (_Bool)adjIsEqual:(id)arg1 toString:(id)arg2;
+ (id)adjJoin:(id)arg1;
+ (id)gckb_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2 excessBytes:(unsigned long long *)arg3;
+ (id)gckb_stringWithUTF8Data:(id)arg1 excessBytes:(unsigned long long *)arg2;
+ (id)spt_serializedPlayCommandURIFromDictionary:(id)arg1;
- (id)spt_postProcessSkipDelayCountdownText;
- (id)BMW_etchObject;
- (id)xmlSimpleEscapeString;
- (id)SHA1StringRepresentation;
- (_Bool)containsString:(id)arg1;
- (id)checkVINLength:(id)arg1;
- (id)convertASCIIVIN:(id)arg1;
- (id)objectWithJsonString:(id)arg1;
- (id)gpsExtendedDictWithVersion:(id)arg1;
- (id)temperatureExteriorDictWithVersion:(id)arg1;
- (id)vehicleIdentificationNumberDictWithVersion:(id)arg1;
- (id)CDSValueForPropertyName:(id)arg1 version:(id)arg2;
- (_Bool)idzk_isResourceForkPath;
- (unsigned int)idzk_precomposedUTF8Length;
- (id)ins_sha1String;
- (id)ins_hexToData;
- (id)spt_contributingArtistsAlbumStringWithFont:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *spt_attributedStringByReplacingLinkHTML;
- (id)spt_attributedStringByInsertingDevicesIconWithTheme:(id)arg1;
- (_Bool)spt_isUsername;
- (id)spt_messageDefaultFont:(id)arg1 boldText:(id)arg2 boldFont:(id)arg3;
- (_Bool)spt_isEmpty;
- (_Bool)isKorean:(id)arg1;
- (_Bool)isJapanese:(id)arg1;
- (_Bool)isChinese:(id)arg1;
- (_Bool)spt_isFirstCharacterEastAsian;
- (id)stringAfterFirstCharacter;
- (id)firstCharacter;
- (id)digitsFromString;
- (_Bool)spt_isSocketCloseURIForIdentifier:(id)arg1;
- (_Bool)spt_isSocketWriteURIForIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool spt_isSocketConnectURI;
@property(readonly, nonatomic) _Bool spt_isSeekURI;
@property(readonly, nonatomic) _Bool spt_isSetPlaybackSpeedURI;
@property(readonly, nonatomic) _Bool spt_isPlaybackSpeedStateURI;
@property(readonly, nonatomic) _Bool spt_isSkipBackwardURI;
@property(readonly, nonatomic) _Bool spt_isSkipForwardURI;
@property(readonly, nonatomic) _Bool spt_isSetVolumeURI;
@property(readonly, nonatomic) _Bool spt_isSetRepeatModeURI;
@property(readonly, nonatomic) _Bool spt_isSetShufflingContextURI;
@property(readonly, nonatomic) _Bool spt_isPauseURI;
@property(readonly, nonatomic) _Bool spt_isPlayURI;
@property(readonly, nonatomic) _Bool spt_isSkipPreviousURI;
@property(readonly, nonatomic) _Bool spt_isSkipNextURI;
@property(readonly, nonatomic) _Bool spt_isCurrentlyPlayingURI;
@property(readonly, nonatomic) _Bool spt_isLogMessageURI;
- (_Bool)spt_isImageURI;
@property(readonly, nonatomic) _Bool spt_isContentChildrenURI;
@property(readonly, nonatomic) _Bool spt_isConnectSetActiveDeviceURI;
@property(readonly, nonatomic) _Bool spt_isConnectDevicesURI;
@property(readonly, nonatomic) _Bool spt_isCollectionRemoveURI;
@property(readonly, nonatomic) _Bool spt_isCollectionAddURI;
@property(readonly, nonatomic) _Bool spt_isCollectionItemStateURI;
- (_Bool)spt_isAuthorizationRequest;
@property(readonly, nonatomic) _Bool spt_isPingURI;
- (id)adjSha256;
- (id)adjSha1;
- (id)adjMd5;
- (id)adjRemoveColons;
- (id)adjUrlDecode;
- (id)adjUrlEncode;
- (id)adjTrim;
- (id)gckb_stringWithTrailingComponentsRemoved:(id)arg1;
- (id)gckb_SHA1Hash;
- (id)gckb_SHA256Hash;
- (id)gckb_base64DecodedData;
- (_Bool)gckb_matchesGlob:(id)arg1;
- (id)gckb_globToRegex;
- (id)gckb_globToRegexPattern;
- (_Bool)gckb_matchesRegex:(id)arg1;
- (_Bool)gckb_containsRegex:(id)arg1;
- (_Bool)gckb_matchesPattern:(id)arg1;
@property(readonly) double glue_cgfloatValue;
- (id)glue_accessibleString;
- (_Bool)spt_hasSuffixInSet:(id)arg1;
- (id)hugs_underscoreToCamelCase:(id)arg1;
- (id)hugs_iconFormattedString;
- (id)spt_stringByChangingCaseOfFirstCharacterWithLocale:(id)arg1 changer:(CDUnknownBlockType)arg2;
- (id)spt_stringByUppercasingFirstCharacterWithLocale:(id)arg1;
- (id)spt_stringByLowercasingFirstCharacterWithLocale:(id)arg1;
@property(readonly, copy, nonatomic, getter=spt_stringBySHA256Hashing) NSString *stringBySHA256Hashing;
@property(readonly, copy, nonatomic, getter=spt_stringBySHA1Hashing) NSString *stringBySHA1Hashing;
- (id)spt_dataFromHexRepresentation;
- (id)spt_stringByReplacingHTMLEntities;
- (id)spt_stringFromHTML;
- (id)spt_stringBySquashingAllWhitespace;
- (id)spt_stringByTrimmingWhitespaceAndNewlines;
@property(readonly, nonatomic) NSString *spt_sha1Representation;
- (id)spt_playCommandDictionaryFromSerializedPlayCommandURI;
@property(readonly, nonatomic) _Bool spt_canDeserializePlayCommandString;
- (id)bm_dataFromHexRepresentation;
@property(readonly, copy, nonatomic, getter=bm_stringBySHA256Hashing) NSString *bm_stringBySHA256Hashing;
@property(readonly, copy, nonatomic, getter=bm_stringBySHA1Hashing) NSString *bm_stringBySHA1Hashing;
@end

