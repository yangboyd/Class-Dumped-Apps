//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NFIChoiceLayoutModel : NSObject
{
    NSString *_type;
    NSString *_text;
    NSString *_styleId;
    NSString *_labelStyleId;
    NSDictionary *_data;
    CDStruct_84bf8c3a _label;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *labelStyleId; // @synthesize labelStyleId=_labelStyleId;
@property(readonly, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) CDStruct_84bf8c3a label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)metadataForKeyPath:(id)arg1;
- (id)labelStyle:(id)arg1 styles:(id)arg2;
- (id)initWithDictionary:(id)arg1 styles:(id)arg2;

@end

