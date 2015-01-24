
#import <Foundation/Foundation.h>

@interface ICalc : NSObject
{
    int leftOp;
    int rightOp;
}

-(void) setLeftOp: (int)nLeftOp;
-(void) setRightOp: (int)nRightOp;
-(void) setValues: (int)nRightOp : (int)nLeftOp;
-(int)  add;

@end