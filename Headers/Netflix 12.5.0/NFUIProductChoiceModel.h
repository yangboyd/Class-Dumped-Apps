//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DataBrokerObjectContext, NSString;

@interface NFUIProductChoiceModel : NSObject
{
    NSString *_messageGuid;
    DataBrokerObjectContext *_dataContext;
    NSString *_choiceContext;
}

@property(retain, nonatomic) NSString *choiceContext; // @synthesize choiceContext=_choiceContext;
@property(retain, nonatomic) DataBrokerObjectContext *dataContext; // @synthesize dataContext=_dataContext;
@property(retain, nonatomic) NSString *messageGuid; // @synthesize messageGuid=_messageGuid;
- (void).cxx_destruct;
- (void)selectPlanId:(id)arg1 priceTier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectProductChoice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getProductChoiceList:(CDUnknownBlockType)arg1;
- (id)initWithDataContext:(id)arg1 choiceContext:(id)arg2;

@end

