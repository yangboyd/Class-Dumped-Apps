//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLXMLTest1EncoderModel, NFLXMLTest1PredictionsModel;

@interface NFLXMLTest1Pipe : NSObject
{
    NFLXMLTest1EncoderModel *_encoderModel;
    NFLXMLTest1PredictionsModel *_predictionsModel;
}

@property(readonly, nonatomic) NFLXMLTest1PredictionsModel *predictionsModel; // @synthesize predictionsModel=_predictionsModel;
@property(readonly, nonatomic) NFLXMLTest1EncoderModel *encoderModel; // @synthesize encoderModel=_encoderModel;
- (void).cxx_destruct;
- (id)classProbabilityWithInput:(id)arg1 error:(inout id *)arg2;
- (id)initWithEencoderModelURL:(id)arg1 predictionsModelURL:(id)arg2 error:(inout id *)arg3;
- (id)initWithEncoderModel:(id)arg1 predictionsModel:(id)arg2;

@end

