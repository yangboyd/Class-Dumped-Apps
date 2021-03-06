//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComnModelImgOutput, MLModel, NSString;

@interface ComnModel : NSObject
{
    MLModel *_model;
    NSString *_input_feature_name;
    ComnModelImgOutput *_imgOutput;
    struct __CVBuffer *_outPixelBuffer;
}

+ (id)getSaveZipLibirayDir:(id)arg1;
+ (void)clearAllCache;
+ (id)cacheZipDirPath;
+ (id)cacheModleDirPath;
+ (id)applicationZipDirectory:(id)arg1;
+ (id)applicationLibirayDirectory:(id)arg1 suffix:(id)arg2;
+ (id)applicationLibirayDirectory:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *outPixelBuffer; // @synthesize outPixelBuffer=_outPixelBuffer;
@property(retain, nonatomic) ComnModelImgOutput *imgOutput; // @synthesize imgOutput=_imgOutput;
@property(retain, nonatomic) NSString *input_feature_name; // @synthesize input_feature_name=_input_feature_name;
@property(retain, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (struct __CVBuffer *)predictionImgFromData:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)predictionImgFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromData:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)predictionImgFromPlaceholder:(id)arg1 error:(id *)arg2;
- (id)predictionFromPlaceholder:(id)arg1 error:(id *)arg2;
- (id)getFeatureName;
- (struct __CVBuffer *)getPixelBufferFromFeatureProvider:(id)arg1;
- (id)getMulArrayFromFeatureProvider:(id)arg1;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionImgFromDatas:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)moveModelcToNewUrl:(id)arg1 modelName:(id)arg2;
- (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (_Bool)zipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadModel:(id)arg1 isHaveModel:(_Bool)arg2 error:(id *)arg3;
- (id)init;

@end

