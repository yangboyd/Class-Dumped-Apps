//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ACCVideoConfigProtocol <NSObject>
@property(readonly, nonatomic) double longVideoDurationLowerLimit;
@property(readonly, nonatomic) double sharpenValueDefault;
@property(readonly, nonatomic) double sharpenValueMax;
@property(readonly, nonatomic) double blusherValueDefault;
@property(readonly, nonatomic) double blusherValueMax;
@property(readonly, nonatomic) double lipstickValueDefault;
@property(readonly, nonatomic) double lipstickValueMax;
@property(readonly, nonatomic) double bigEyeValueDefault;
@property(readonly, nonatomic) double bigEyeValueMax;
@property(readonly, nonatomic) double faceLiftValueDefault;
@property(readonly, nonatomic) double faceLiftValueMax;
@property(readonly, nonatomic) double smoothLevelDefault;
@property(readonly, nonatomic) double smoothLevelMax;
@property(readonly, nonatomic) double reshapeLevelDefault;
@property(readonly, nonatomic) double reshapeLevelMax;
@property(readonly, nonatomic) unsigned long long beautifyType;

@optional
@property(readonly, nonatomic) _Bool isProductUseStandardMusicVideoDuration;
@property(readonly, nonatomic) _Bool isLongVideoEnaled;
@property(readonly, nonatomic) _Bool isLimitInitialMaxSeconds;
@property(readonly, nonatomic) long long clipVideoInitialMaxSeconds;
@property(readonly, nonatomic) long long musicMaxSeconds;
@property(readonly, nonatomic) long long videoUploadMaxSeconds;
@property(readonly, nonatomic) long long videoSelectableMaxSeconds;
@property(readonly, nonatomic) long long standardVideoMaxSeconds;
@property(readonly, nonatomic) long long videoMaxSeconds;
@property(readonly, nonatomic) long long videoMinSeconds;
- (_Bool)allowUploadSinglePhoto;
- (_Bool)limitMusicAccordingLongVideo;
- (_Bool)needIsLongVideoParameter;
- (_Bool)allowUploadLongVideo;
- (long long)publishMaxTitleLengthForFeedType:(long long)arg1;
- (long long)publishMaxTitleLength;
- (_Bool)enablePhotoHashTag;
- (_Bool)showTitleInVideoCameraBottomView;
- (_Bool)enableUploadClientBOE;
- (void)updateCurrentVideoLenthMode:(long long)arg1;
- (long long)currentVideoLenthMode;
@end

