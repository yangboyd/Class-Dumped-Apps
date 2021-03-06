//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAVConfigurations : NSObject
{
}

+ (id)axisMapFromConfigurations:(id)arg1;
+ (id)behaviorFromConfiguration:(id)arg1;
+ (id)selectionBehaviorFromConfiguration:(id)arg1;
+ (id)chartViewWithFrame:(struct CGRect)arg1 fromConfiguration:(id)arg2;
+ (CDUnknownBlockType)factoryForKey:(id)arg1;
+ (void)registerKey:(id)arg1 withFactory:(CDUnknownBlockType)arg2;
+ (void)initialize;
+ (_Bool)isTimeAxis:(id)arg1;
+ (id)manualTickProviderFromConfiguration:(id)arg1 isTimeAxis:(_Bool)arg2;
+ (id)numericTickProviderFromConfiguration:(id)arg1;
+ (id)tickProviderFromConfiguration:(id)arg1 isTimeAxis:(_Bool)arg2;
+ (id)dateFormatterFromConfiguration:(id)arg1;
+ (id)numericTickFormatterFromConfiguration:(id)arg1;
+ (id)tickFormatterFromConfiguration:(id)arg1;
+ (id)axisSpecFromConfiguration:(id)arg1;
+ (id)dictionaryFromConfiguration:(id)arg1;
+ (id)customComponentFromConfiguration:(id)arg1;
+ (id)seriesSpecsFromCompositeSeriesConfiguration:(id)arg1 withAxisConfigurations:(id)arg2;
+ (id)seriesSpecFromCartesianSeriesConfiguration:(id)arg1 withAxisConfigurations:(id)arg2;
+ (id)seriesSpecFromConfiguration:(id)arg1 withSeriesType:(id)arg2 withAxisConfigurations:(id)arg3;
+ (id)seriesSpecFromSimpleSeriesConfiguration:(id)arg1;
+ (id)seriesSpecsFromConfiguration:(id)arg1 withAxisConfigurations:(id)arg2;
+ (id)textStyleFromConfiguration:(id)arg1;
+ (id)tickStyleFromConfiguration:(id)arg1 collisionRotation:(id)arg2 orientation:(int)arg3;
+ (id)areaStyleFromConfiguration:(id)arg1;
+ (id)pointStyleFromConfiguration:(id)arg1;
+ (id)pieStyleFromConfiguration:(id)arg1;
+ (id)barStyleFromConfiguration:(id)arg1;
+ (id)lineStyleFromConfiguration:(id)arg1;
+ (id)axisStyleFromConfiguration:(id)arg1 forAxisSpec:(id)arg2;
+ (id)colorFromConfiguration:(id)arg1;
+ (id)barTargetSeriesStyleFromConfiguration:(id)arg1;
+ (id)pieSeriesStyleFromConfiguration:(id)arg1;
+ (id)lineSeriesStyleFromConfiguration:(id)arg1;
+ (id)barSeriesStyleFromConfiguration:(id)arg1;
+ (id)colorsFromStrings:(id)arg1;
+ (void)setColorsForStylePack:(id)arg1 fromConfiguration:(id)arg2;
+ (id)styleRulesFromStyles:(id)arg1 forRendererType:(id)arg2;
+ (id)seriesStylesFromConfigurations:(id)arg1 styleBlock:(CDUnknownBlockType)arg2;
+ (id)chartStyleFromConfiguration:(id)arg1;
+ (id)stylePackFromConfiguration:(id)arg1 withStylePack:(id)arg2;
+ (id)stylePack:(id)arg1;
+ (void)validateConfiguration:(id)arg1 requiredKeys:(id)arg2;

@end

