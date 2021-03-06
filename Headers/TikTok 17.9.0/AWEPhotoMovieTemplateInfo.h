//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEPhotoMovieTemplateInfo : NSObject
{
    NSArray *_templateVideoCoverURL;
    NSArray *_templatePictureCoverURL;
    long long _templateMinMaterial;
    long long _templateMaxMaterial;
    long long _templatePicInputWidth;
    long long _templatePicInputHeight;
    NSString *_templatePicFillMode;
    long long _templateType;
}

- (void).cxx_destruct;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *templatePicFillMode; // @synthesize templatePicFillMode=_templatePicFillMode;
@property(nonatomic) long long templatePicInputHeight; // @synthesize templatePicInputHeight=_templatePicInputHeight;
@property(nonatomic) long long templatePicInputWidth; // @synthesize templatePicInputWidth=_templatePicInputWidth;
@property(nonatomic) long long templateMaxMaterial; // @synthesize templateMaxMaterial=_templateMaxMaterial;
@property(nonatomic) long long templateMinMaterial; // @synthesize templateMinMaterial=_templateMinMaterial;
@property(copy, nonatomic) NSArray *templatePictureCoverURL; // @synthesize templatePictureCoverURL=_templatePictureCoverURL;
@property(copy, nonatomic) NSArray *templateVideoCoverURL; // @synthesize templateVideoCoverURL=_templateVideoCoverURL;

@end

