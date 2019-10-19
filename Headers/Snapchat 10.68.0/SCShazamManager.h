//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;
@protocol SCShazamManagerDelegate;

@interface SCShazamManager : NSObject
{
    struct SHAZAM_SIGX *_sigx;
    double _rootMeanSqure;
    NSString *_countryCode;
    NSString *_languageCode;
    double _maxSampleSeconds;
    double _sendInterval;
    _Bool _sendingInProgress;
    _Bool _receivedValidResponse;
    id <SCShazamManagerDelegate> _delegate;
    double _prevSentTime;
    double _retryLength;
    double _responseReceivedTime;
    double _recordStartTime;
    NSDictionary *_currResponse;
    double _serverResponseTime;
    UIImage *_topSnapImage;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIImage *topSnapImage; // @synthesize topSnapImage=_topSnapImage;
@property(nonatomic) double serverResponseTime; // @synthesize serverResponseTime=_serverResponseTime;
@property(copy, nonatomic) NSDictionary *currResponse; // @synthesize currResponse=_currResponse;
@property(nonatomic) double recordStartTime; // @synthesize recordStartTime=_recordStartTime;
@property(nonatomic) double responseReceivedTime; // @synthesize responseReceivedTime=_responseReceivedTime;
@property(nonatomic) _Bool receivedValidResponse; // @synthesize receivedValidResponse=_receivedValidResponse;
@property(nonatomic) _Bool sendingInProgress; // @synthesize sendingInProgress=_sendingInProgress;
@property(nonatomic) double retryLength; // @synthesize retryLength=_retryLength;
@property(nonatomic) double prevSentTime; // @synthesize prevSentTime=_prevSentTime;
@property(nonatomic) __weak id <SCShazamManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetInfo;
- (void)handlePCMPostFailureWithError:(id)arg1;
- (void)handlePCMPostSuccessWithResponse:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 withToken:(id)arg2 countryCode:(id)arg3 deviceId:(id)arg4 sessionId:(id)arg5 maxSampleSeconds:(double)arg6 sendInterval:(double)arg7 successBlock:(CDUnknownBlockType)arg8;
- (id)init;

@end

