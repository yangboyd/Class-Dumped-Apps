//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString;
@protocol Optional;

@interface TTDownloadTrackModel : JSONModel
{
    _Bool _httpsDegradeEnable;
    _Bool _hasHttpsDegrade;
    _Bool _isWifiOnly;
    _Bool _isBgDownloadEnable;
    _Bool _isBackgroundDownloadFinish;
    float _downloadSpeed;
    NSString *_downloadId;
    NSString *_fileStorageDir;
    NSString<Optional> *_md5Value;
    double _md5Time;
    NSString<Optional> *_url;
    NSString<Optional> *_secondUrl;
    NSString<Optional> *_name;
    double _downloadTime;
    long long _totalBytes;
    long long _curBytes;
    long long _sliceCount;
    long long _urlRetryCount;
    long long _curUrlRetryTime;
    double _urlRetryInterval;
    double _gclTime;
    long long _retryCount;
    long long _curRetryTime;
    double _sliceMergeTime;
    long long _restoreCount;
    long long _curRestoreTime;
    double _retryInterval;
    double _retryIntervalIncrement;
    long long _throttleNetSpeed;
    long long _failStatus;
    NSString<Optional> *_failMsg;
    double _bgDownloadTime;
    long long _curBgDownloadBytes;
    long long _trackStatus;
    NSDictionary<Optional> *_extraParams;
    double _curStartTime;
    long long _curFgDownloadBytes;
    double _curBgStartTime;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
+ (id)generateDownloadIdWithUrl:(id)arg1 fileName:(id)arg2;
@property double curBgStartTime; // @synthesize curBgStartTime=_curBgStartTime;
@property long long curFgDownloadBytes; // @synthesize curFgDownloadBytes=_curFgDownloadBytes;
@property double curStartTime; // @synthesize curStartTime=_curStartTime;
@property(copy) NSDictionary<Optional> *extraParams; // @synthesize extraParams=_extraParams;
@property long long trackStatus; // @synthesize trackStatus=_trackStatus;
@property float downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property long long curBgDownloadBytes; // @synthesize curBgDownloadBytes=_curBgDownloadBytes;
@property double bgDownloadTime; // @synthesize bgDownloadTime=_bgDownloadTime;
@property _Bool isBackgroundDownloadFinish; // @synthesize isBackgroundDownloadFinish=_isBackgroundDownloadFinish;
@property _Bool isBgDownloadEnable; // @synthesize isBgDownloadEnable=_isBgDownloadEnable;
@property _Bool isWifiOnly; // @synthesize isWifiOnly=_isWifiOnly;
@property(copy) NSString<Optional> *failMsg; // @synthesize failMsg=_failMsg;
@property long long failStatus; // @synthesize failStatus=_failStatus;
@property long long throttleNetSpeed; // @synthesize throttleNetSpeed=_throttleNetSpeed;
@property _Bool hasHttpsDegrade; // @synthesize hasHttpsDegrade=_hasHttpsDegrade;
@property _Bool httpsDegradeEnable; // @synthesize httpsDegradeEnable=_httpsDegradeEnable;
@property double retryIntervalIncrement; // @synthesize retryIntervalIncrement=_retryIntervalIncrement;
@property double retryInterval; // @synthesize retryInterval=_retryInterval;
@property long long curRestoreTime; // @synthesize curRestoreTime=_curRestoreTime;
@property long long restoreCount; // @synthesize restoreCount=_restoreCount;
@property double sliceMergeTime; // @synthesize sliceMergeTime=_sliceMergeTime;
@property long long curRetryTime; // @synthesize curRetryTime=_curRetryTime;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property double gclTime; // @synthesize gclTime=_gclTime;
@property double urlRetryInterval; // @synthesize urlRetryInterval=_urlRetryInterval;
@property long long curUrlRetryTime; // @synthesize curUrlRetryTime=_curUrlRetryTime;
@property long long urlRetryCount; // @synthesize urlRetryCount=_urlRetryCount;
@property long long sliceCount; // @synthesize sliceCount=_sliceCount;
@property long long curBytes; // @synthesize curBytes=_curBytes;
@property long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property double downloadTime; // @synthesize downloadTime=_downloadTime;
@property(copy) NSString<Optional> *name; // @synthesize name=_name;
@property(copy) NSString<Optional> *secondUrl; // @synthesize secondUrl=_secondUrl;
@property(copy) NSString<Optional> *url; // @synthesize url=_url;
@property double md5Time; // @synthesize md5Time=_md5Time;
@property(copy) NSString<Optional> *md5Value; // @synthesize md5Value=_md5Value;
@property(copy) NSString *fileStorageDir; // @synthesize fileStorageDir=_fileStorageDir;
@property(copy) NSString *downloadId; // @synthesize downloadId=_downloadId;
- (void).cxx_destruct;
- (void)calBgDownloadBytes;
- (void)recordFgDownloadBytes;
- (void)addBgDownloadBytes:(long long)arg1;
- (void)addCurUrlRetryTime:(long long)arg1;
- (void)addCurRetryTime:(long long)arg1;
- (void)addCurRestoreTime:(long long)arg1;
- (double)addBgDownloadTimeWithReSet;
- (void)setBgDownloadStartTime;
- (double)addDownloadTime;
- (double)addDownloadTimeWithReSet;
- (void)setDownloadStartTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

