//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURLResponse, NSUUID, UIImage;

@interface PINRemoteImageManagerResult : NSObject
{
    UIImage *_image;
    id _alternativeRepresentation;
    double _requestDuration;
    NSError *_error;
    unsigned long long _resultType;
    NSUUID *_UUID;
    double _renderedImageQuality;
    unsigned long long _bytesSavedByResuming;
    NSURLResponse *_response;
}

+ (id)imageResultWithImage:(id)arg1 alternativeRepresentation:(id)arg2 requestLength:(double)arg3 resultType:(unsigned long long)arg4 UUID:(id)arg5 response:(id)arg6 error:(id)arg7 renderedImageQuality:(double)arg8;
+ (id)imageResultWithImage:(id)arg1 alternativeRepresentation:(id)arg2 requestLength:(double)arg3 resultType:(unsigned long long)arg4 UUID:(id)arg5 response:(id)arg6 error:(id)arg7 bytesSavedByResuming:(unsigned long long)arg8;
+ (id)imageResultWithImage:(id)arg1 alternativeRepresentation:(id)arg2 requestLength:(double)arg3 resultType:(unsigned long long)arg4 UUID:(id)arg5 response:(id)arg6 error:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) unsigned long long bytesSavedByResuming; // @synthesize bytesSavedByResuming=_bytesSavedByResuming;
@property(readonly, nonatomic) double renderedImageQuality; // @synthesize renderedImageQuality=_renderedImageQuality;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double requestDuration; // @synthesize requestDuration=_requestDuration;
@property(readonly, nonatomic) id alternativeRepresentation; // @synthesize alternativeRepresentation=_alternativeRepresentation;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;
- (id)initWithImage:(id)arg1 alternativeRepresentation:(id)arg2 requestLength:(double)arg3 error:(id)arg4 resultType:(unsigned long long)arg5 UUID:(id)arg6 response:(id)arg7 renderedImageQuality:(double)arg8 bytesSavedByResuming:(unsigned long long)arg9;

@end

