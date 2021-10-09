tests = [ {'description': 'PINA:  0x03',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 1 } ],
    'expected': [('PORTC',0x70)],
    },

 {'description': 'PINA: 0X06',
    'steps': [ {'inputs': [('PINA',0x06)], 'iterations': 1 } ],
    'expected': [('PORTC',0x38)],
    },

 {'description': 'PINA = 0x0F',
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 1 } ],
    'expected': [('PORTC',0x3F)],
    },

 {'description': 'PINA = 0x3A',
    'steps': [ {'inputs': [('PINA',0x3A)], 'iterations': 1 } ],
    'expected': [('PORTC',0xBE)],
    },



#    {'description': 'This test will run second.',
 #   'steps': [ {'inputs': [('PIN', <val>)],'iterations': 1}, # Set PIN to val then run one iteration
  #      {'inputs': [('PIN',<val>)], 'time': 300 }, # Set PIN to val then run 300 ms
   #     {'inputs': [('PIN',<val>)], 'iterations': 1, 'expected': [('PORT',<val>)]}, 
    #    {'inputs': [('PIN',<val>)], 'time': 600}, ],
   # 'expected': [('PORT',<val>)],
  #  },
    ]
