//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDXBridgeModel.h"

@class NSNumber, NSString;

@interface BDXBridgeReportALogMethodParamCodePositionModel : BDXBridgeModel
{
    NSString *_file;
    NSString *_function;
    NSNumber *_line;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *line; // @synthesize line=_line;
@property(copy, nonatomic) NSString *function; // @synthesize function=_function;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void).cxx_destruct;

@end

