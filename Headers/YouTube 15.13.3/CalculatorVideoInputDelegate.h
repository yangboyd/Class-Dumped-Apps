//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/DrishtiInputSourceDelegate-Protocol.h>

@class NSString;

@interface CalculatorVideoInputDelegate : NSObject <DrishtiInputSourceDelegate>
{
    // Error parsing type: ^{VideoPlayerCalculator=^^?{GlCalculatorHelper={unique_ptr<drishti::GlCalculatorHelperImpl, std::__1::default_delete<drishti::GlCalculatorHelperImpl> >={__compressed_pair<drishti::GlCalculatorHelperImpl *, std::__1::default_delete<drishti::GlCalculatorHelperImpl> >=^{GlCalculatorHelperImpl}}}}qqqqddBB@@@{Mutex={atomic<long>=Aq}}{CondVar={atomic<long>=Aq}}{CFHolder<__CVBuffer *>=^{__CVBuffer}}q}, name: calculator_
}

- (void)videoDidPlayToEnd:(CDStruct_1b6d18a9)arg1;
-     // Error parsing type: @24@0:8^{VideoPlayerCalculator=^^?{GlCalculatorHelper={unique_ptr<drishti::GlCalculatorHelperImpl, std::__1::default_delete<drishti::GlCalculatorHelperImpl> >={__compressed_pair<drishti::GlCalculatorHelperImpl *, std::__1::default_delete<drishti::GlCalculatorHelperImpl> >=^{GlCalculatorHelperImpl}}}}qqqqddBB@@@{Mutex={atomic<long>=Aq}}{CondVar={atomic<long>=Aq}}{CFHolder<__CVBuffer *>=^{__CVBuffer}}q}16, name: initWithCalculator:
- (void)processVideoFrame:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 fromSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

