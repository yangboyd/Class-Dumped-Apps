//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVLegendItemFactory-Protocol.h"

@protocol GAVLegend;

@interface GAVPieLegendItemFactory : NSObject <GAVLegendItemFactory>
{
    id <GAVLegend> _legend;
    CDUnknownBlockType _percentFormatter;
}

@property(copy, nonatomic) CDUnknownBlockType percentFormatter; // @synthesize percentFormatter=_percentFormatter;
@property(nonatomic) __weak id <GAVLegend> legend; // @synthesize legend=_legend;
- (void).cxx_destruct;
- (double)percentForSeriesMetaData:(id)arg1;
- (id)legendItemWithSeriesMetaData:(id)arg1;
- (id)initWithMeasurePercentFormatter:(CDUnknownBlockType)arg1;

@end

