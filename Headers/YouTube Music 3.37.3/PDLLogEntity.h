//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDLLogEntity : NSObject
{
    _Bool _isDeviceData;
    _Bool _hasAvatar;
    NSString *_fieldLoggingID;
    NSString *_autocompletionLoggingID;
    unsigned long long _fieldPosition;
    unsigned long long _autocompletionPosition;
    NSString *_displayName;
    double _callbackLatency;
}

@property(nonatomic) double callbackLatency; // @synthesize callbackLatency=_callbackLatency;
@property(readonly, nonatomic) _Bool hasAvatar; // @synthesize hasAvatar=_hasAvatar;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long autocompletionPosition; // @synthesize autocompletionPosition=_autocompletionPosition;
@property(readonly, nonatomic) unsigned long long fieldPosition; // @synthesize fieldPosition=_fieldPosition;
@property(readonly, nonatomic) NSString *autocompletionLoggingID; // @synthesize autocompletionLoggingID=_autocompletionLoggingID;
@property(readonly, nonatomic) NSString *fieldLoggingID; // @synthesize fieldLoggingID=_fieldLoggingID;
@property(readonly, nonatomic) _Bool isDeviceData; // @synthesize isDeviceData=_isDeviceData;
- (void).cxx_destruct;
- (id)initWithFieldLoggingID:(id)arg1 fieldPosition:(unsigned long long)arg2 deviceData:(_Bool)arg3 autocompletionLoggingID:(id)arg4 autocompletionPosition:(unsigned long long)arg5 displayName:(id)arg6 hasAvatar:(_Bool)arg7;
- (id)initWithAutocompletionLoggingID:(id)arg1 autocompletionPosition:(unsigned long long)arg2 displayName:(id)arg3 deviceData:(_Bool)arg4 hasAvatar:(_Bool)arg5;

@end

